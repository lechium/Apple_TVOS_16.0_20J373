//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// IMP=0x00800000000c5ca0
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x008000000010c6f0
+ (id)_web_URLWithDataAsString:(id)arg1;	// IMP=0x008000000010c6d0
+ (id)_webkit_URLWithUserTypedString:(id)arg1;	// IMP=0x008000000010c6c0
+ (id)_web_URLWithUserTypedString:(id)arg1;	// IMP=0x008000000010c6b0
- (id)_webkit_URLFromURLOrSchemelessFileURL;	// IMP=0x001000000010cb30
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;	// IMP=0x001000000010caa0
- (id)_web_hostString;	// IMP=0x001000000010ca40
- (id)_web_hostData;	// IMP=0x001000000010c9d0
- (id)_web_schemeData;	// IMP=0x001000000010c9c0
- (_Bool)_webkit_isFileURL;	// IMP=0x001000000010c990
- (id)_webkit_scriptIfJavaScriptURL;	// IMP=0x001000000010c960
- (_Bool)_webkit_isJavaScriptURL;	// IMP=0x001000000010c930
- (id)_web_URLByRemovingUserInfo;	// IMP=0x001000000010c920
- (id)_webkit_URLByRemovingFragment;	// IMP=0x001000000010c910
- (id)_webkit_canonicalize_with_wtf;	// IMP=0x001000000010c880
- (id)_webkit_canonicalize;	// IMP=0x001000000010c870
- (const char *)_web_URLCString;	// IMP=0x001000000010c7f0
- (_Bool)_web_isEmpty;	// IMP=0x001000000010c7a0
- (id)_web_userVisibleString;	// IMP=0x001000000010c790
- (id)_web_originalDataAsString;	// IMP=0x001000000010c740
- (id)_web_originalData;	// IMP=0x001000000010c730
@end

