//===--- TriCore.cpp - Implement TriCore target feature support -----------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements TriCore TargetInfo objects.
//
//===----------------------------------------------------------------------===//

#include "TriCore.h"
#include "Targets.h"
#include "clang/Basic/Builtins.h"
#include "clang/Basic/MacroBuilder.h"
#include "clang/Basic/TargetBuiltins.h"

using namespace clang;
using namespace clang::targets;

ArrayRef<Builtin::Info> TriCoreTargetInfo::getTargetBuiltins() const {
  return {};
}

void TriCoreTargetInfo::getTargetDefines(const LangOptions &Opts,
                                         MacroBuilder &Builder) const {
  Builder.defineMacro("__tricore__");
}
