//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSError, NSString;

@protocol PLAssetsdServiceContext <NSObject>
@property(readonly, copy) NSError *shutdownReason;
@property(readonly, copy, nonatomic) NSString *clientDebugDescription;
@property(readonly, nonatomic) _Bool isClientAuthorizedForTCCServicePhotosAdd;
@property(readonly, nonatomic) _Bool isClientAuthorizedForTCCServicePhotos;
- (void)invalidateClientAuthorizationCache;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (_Bool)hasEntitlement:(NSString *)arg1;
@end

