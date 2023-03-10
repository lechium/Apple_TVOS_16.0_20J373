//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMPOSIXUser, MCMUserIdentity, NSString;

@protocol MCMUserIdentityCache <NSObject>
- (MCMUserIdentity *)defaultUserIdentity;
- (MCMUserIdentity *)globalSystemUserIdentity;
- (MCMUserIdentity *)globalBundleUserIdentity;
- (MCMUserIdentity *)userIdentityForPersonalPersonaWithPOSIXUser:(MCMPOSIXUser *)arg1;
- (MCMUserIdentity *)userIdentityForPersonaUniqueString:(NSString *)arg1 POSIXUser:(MCMPOSIXUser *)arg2;
@end

