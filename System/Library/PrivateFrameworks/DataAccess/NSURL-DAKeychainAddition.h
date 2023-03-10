//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (DAKeychainAddition)
+ (int)da_classicPortForScheme:(id)arg1;	// IMP=0x0060000000026c19
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x0060000000026bf1
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;	// IMP=0x0060000000026a44
+ (id)da_URLWithDirtyString:(id)arg1;	// IMP=0x006000000002694a
- (id)URLWithUsername:(id)arg1;	// IMP=0x001000000001599f
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x0010000000015714
- (id)URLByRemovingLastPathComponent;	// IMP=0x00100000000155a2
- (id)URLWithoutUsername;	// IMP=0x0010000000015477
- (id)uri;	// IMP=0x00100000000153ab
- (id)da_pathWithoutTrailingRemovingSlash;	// IMP=0x001000000002688e
- (id)da_rawPath;	// IMP=0x001000000002686e
- (id)da_urlBySettingPath:(id)arg1;	// IMP=0x001000000002685a
- (id)da_urlBySettingPort:(id)arg1;	// IMP=0x0010000000026846
- (id)da_urlBySettingHost:(id)arg1;	// IMP=0x0010000000026832
- (id)da_urlBySettingScheme:(id)arg1;	// IMP=0x001000000002681e
- (id)da_urlForLogging;	// IMP=0x0010000000026711
- (id)da_urlByRemovingUsername;	// IMP=0x00100000000264cf
- (id)da_urlBySettingPassword:(id)arg1;	// IMP=0x0010000000026210
- (id)da_urlBySettingUsername:(id)arg1;	// IMP=0x0010000000025f73
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0010000000025cb2
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x00100000000259e6
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x001000000002572c
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0010000000025450
- (_Bool)da_isEqualToDAVURL:(id)arg1;	// IMP=0x0010000000024dbd
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0010000000026ca3
@end

