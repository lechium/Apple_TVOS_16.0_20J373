//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@protocol WebAllowDenyPolicyListener <NSObject>
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)deny;
- (void)allow;
@end

