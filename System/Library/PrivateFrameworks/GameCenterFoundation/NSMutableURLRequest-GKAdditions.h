//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x0060000000022c55
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x0060000000022975
- (void)setSAPversion:(id)arg1;	// IMP=0x0010000000023a4f
- (void)setSAPSignature:(id)arg1;	// IMP=0x00100000000239a1
- (void)setLocale:(id)arg1;	// IMP=0x00100000000238e9
- (void)setInternal:(_Bool)arg1;	// IMP=0x0010000000023814
- (void)setPushToken:(id)arg1;	// IMP=0x00100000000236b5
- (void)setBuildVersion:(id)arg1;	// IMP=0x00100000000235d1
- (void)setProtocolVersion:(id)arg1;	// IMP=0x00100000000234ed
- (void)setProcessName:(id)arg1;	// IMP=0x0010000000023409
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x0010000000023325
- (void)setRestrictions:(id)arg1;	// IMP=0x0010000000023225
- (void)setStoreMode:(id)arg1;	// IMP=0x001000000002315b
- (void)setGameDescriptor:(id)arg1;	// IMP=0x0010000000022dce
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x0010000000022c98
@end

