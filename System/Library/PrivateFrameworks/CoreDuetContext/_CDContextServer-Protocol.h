//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuetContext/NSObject-Protocol.h>

@class NSArray, NSDate, NSObject, NSUUID, _CDContextualChangeRegistration, _CDContextualKeyPath, _CDContextualPredicate;
@protocol NSCopying><NSSecureCoding;

@protocol _CDContextServer <NSObject>
- (void)deactivateDevices:(NSArray *)arg1 remoteUserContextProxySourceDeviceUUID:(NSUUID *)arg2;
- (void)activateDevices:(NSArray *)arg1 remoteUserContextProxySourceDeviceUUID:(NSUUID *)arg2;
- (void)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 lastModifiedDate:(NSDate *)arg2 forContextualKeyPath:(_CDContextualKeyPath *)arg3 handler:(void (^)(_Bool))arg4;
- (void)evaluatePredicate:(_CDContextualPredicate *)arg1 handler:(void (^)(_Bool))arg2;
- (void)deregisterCallback:(_CDContextualChangeRegistration *)arg1;
- (void)registerCallback:(_CDContextualChangeRegistration *)arg1;
- (void)propertiesOfPath:(_CDContextualKeyPath *)arg1 handler:(void (^)(NSObject *, NSDate *))arg2;
- (void)hasKnowledgeOfPath:(_CDContextualKeyPath *)arg1 handler:(void (^)(_Bool))arg2;
@end

