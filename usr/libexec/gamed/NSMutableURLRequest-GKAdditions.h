//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x00100000000befb3
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x00100000000bec7a
- (void)setSAPversion:(id)arg1;	// IMP=0x00200000000bfdad
- (void)setSAPSignature:(id)arg1;	// IMP=0x00100000000bfcff
- (void)setLocale:(id)arg1;	// IMP=0x00100000000bfc47
- (void)setInternal:(_Bool)arg1;	// IMP=0x00100000000bfb72
- (void)setPushToken:(id)arg1;	// IMP=0x00100000000bfa13
- (void)setBuildVersion:(id)arg1;	// IMP=0x00100000000bf92f
- (void)setProtocolVersion:(id)arg1;	// IMP=0x00100000000bf84b
- (void)setProcessName:(id)arg1;	// IMP=0x00100000000bf767
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x00100000000bf683
- (void)setRestrictions:(id)arg1;	// IMP=0x00100000000bf583
- (void)setStoreMode:(id)arg1;	// IMP=0x00100000000bf4b9
- (void)setGameDescriptor:(id)arg1;	// IMP=0x00100000000bf12c
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x00100000000beff6
@end

