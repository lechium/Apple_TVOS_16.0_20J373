//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HHAMessageService, HHANode, HHANodeStrategyFactory, NSObject, NSUUID;
@protocol HHAMeshProxy, HHATimerFactory, OS_dispatch_queue;

@protocol HHANodeDependencyFactory
- (id <HHAMeshProxy>)createMeshProxyWithHubId:(NSUUID *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (HHANodeStrategyFactory *)createStrategyFactoryWithNode:(HHANode *)arg1 messageService:(HHAMessageService *)arg2 timerFactory:(id <HHATimerFactory>)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (HHAMessageService *)createMessageServiceWithMesh:(id <HHAMeshProxy>)arg1 hubId:(NSUUID *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
@end

