// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_ATOM_BROWSER_CONTEXT_H_
#define ATOM_BROWSER_ATOM_BROWSER_CONTEXT_H_

#include "brightray/browser/browser_context.h"

namespace atom {

class AtomBrowserContext : public brightray::BrowserContext {
 public:
  AtomBrowserContext();
  virtual ~AtomBrowserContext();

  // We assume there is only one BrowserContext per browser process.
  static AtomBrowserContext* Get();

 private:
  static AtomBrowserContext* self_;

  DISALLOW_COPY_AND_ASSIGN(AtomBrowserContext);
};

}  // namespace atom

#endif  // ATOM_BROWSER_ATOM_BROWSER_CONTEXT_H_