#!/usr/bin/env python3
# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# pyre-strict

import unittest

from testing.types import customized
from thrift.py3.serializer import deserialize, serialize


# Tests for customized alternate implementations of the data structures:


class CustomTests(unittest.TestCase):
    def roundTrip(self, obj: customized) -> None:
        self.assertEqual(obj, deserialize(customized, serialize(obj)))

    def test_list_template(self) -> None:
        c = customized(list_template=[1, 2, 3])
        res = []
        for v in c.list_template:
            res.append(v)
        self.assertEqual(res, [1, 2, 3])
        self.assertNotIsInstance(c.list_template, list)
        self.roundTrip(c)

    def test_set_template(self) -> None:
        c = customized(set_template={1, 2, 3})
        res = set()
        for v in c.set_template:
            res.add(v)
        self.assertEqual(res, {1, 2, 3})
        self.assertNotIsInstance(c.set_template, set)
        self.roundTrip(c)

    def test_map_template(self) -> None:
        c = customized(map_template={1: 2, 3: 6, 5: 10})
        res = {}
        for k, v in c.map_template.items():
            res[k] = v
        self.assertEqual(res, {1: 2, 3: 6, 5: 10})
        self.assertNotIsInstance(c.map_template, dict)
        self.roundTrip(c)

    def test_list_type(self) -> None:
        c = customized(list_type=[1, 2, 3])
        res = []
        for v in c.list_type:
            res.append(v)
        self.assertEqual(res, [1, 2, 3])
        self.assertNotIsInstance(c.list_type, list)
        self.roundTrip(c)

    def test_set_type(self) -> None:
        c = customized(set_type={1, 2, 3})
        res = set()
        for v in c.set_type:
            res.add(v)
        self.assertEqual(res, {1, 2, 3})
        self.assertNotIsInstance(c.set_type, set)
        self.roundTrip(c)

    def test_map_type(self) -> None:
        c = customized(map_type={1: 2, 3: 6, 5: 10})
        res = {}
        for k, v in c.map_type.items():
            res[k] = v
        self.assertEqual(res, {1: 2, 3: 6, 5: 10})
        self.assertNotIsInstance(c.map_type, dict)
        self.roundTrip(c)

    def test_string_type(self) -> None:
        c = customized(string_type="hello")
        self.assertEqual(c.string_type, "hello")
        # For custom primitive and string types, we don't create new instance of type.
        self.roundTrip(c)

    def test_cpp_name(self) -> None:
        c = customized(foo=3)
        self.assertEqual(c.foo, 3)
        self.roundTrip(c)

    def test_list_of_uint32(self) -> None:
        c = customized(list_of_uint32=[1, 2, 3])
        self.assertEqual(c.list_of_uint32, [1, 2, 3])
        self.assertNotIsInstance(c.list_of_uint32, list)
        self.roundTrip(c)
