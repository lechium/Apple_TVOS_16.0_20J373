//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/MCMResult-Protocol.h>

@class MCMConcreteContainerIdentityForLibsystem, MCMResolvedLink;

@protocol MCMResultWithLink <MCMResult>
- (id)initWithContainerAIdentity:(MCMConcreteContainerIdentityForLibsystem *)arg1 containerBIdentity:(MCMConcreteContainerIdentityForLibsystem *)arg2 attributes:(unsigned long long)arg3 implied:(_Bool)arg4;
- (id)initWithResolvedLink:(MCMResolvedLink *)arg1;
@end
