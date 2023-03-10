//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLClientManagerAuthorizationContext, CLLocation, NSDictionary, NSString;

@protocol CLClientAuthorizationCacheProtocol <CLIntersiloServiceProtocol>
- (int)syncgetAuthorizationOfClient:(NSString *)arg1 forServiceMask:(unsigned long long)arg2;
- (void)updateCurrentLocation:(CLLocation *)arg1;
- (void)notifyWhenCacheIsPopulatedWithReply:(void (^)(void))arg1;
- (void)setPersistentStoreDictionary:(NSDictionary *)arg1 forClient:(NSString *)arg2;
- (void)setClientsAuthorizationMap:(NSDictionary *)arg1;
- (CLClientManagerAuthorizationContext *)syncgetAuthorizationContextForClient:(NSString *)arg1 at:(CLLocation *)arg2;
- (void)getAuthorizationContextOfNonZonalClient:(NSString *)arg1 withReply:(void (^)(CLClientManagerAuthorizationContext *))arg2;
- (CLClientManagerAuthorizationContext *)syncgetAuthorizationContextIfClientIsNonZonal:(NSString *)arg1;
@end

