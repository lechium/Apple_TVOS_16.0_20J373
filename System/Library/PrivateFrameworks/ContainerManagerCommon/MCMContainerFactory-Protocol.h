//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMContainerIdentity, NSURL;
@protocol MCMContainerCacheEntry;

@protocol MCMContainerFactory <NSObject>
- (_Bool)isAppropriatePersonaForContainerClass:(unsigned long long)arg1;
- (_Bool)deleteURL:(NSURL *)arg1 reclaimSoon:(_Bool)arg2 error:(id *)arg3;
- (_Bool)deleteURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MCMContainerCacheEntry>)containerForContainerIdentity:(MCMContainerIdentity *)arg1 createIfNecessary:(_Bool)arg2 updateLinks:(_Bool)arg3 error:(id *)arg4;
@end

