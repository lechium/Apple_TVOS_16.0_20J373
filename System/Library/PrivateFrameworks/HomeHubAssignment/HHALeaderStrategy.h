//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAEndpointMonitor, HHAHubMonitor, HHAMessageService, HHANode, NSString, NSUUID;
@protocol HHAAssignmentAlgorithm, HHATimer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHALeaderStrategy : NSObject
{
    _Bool _registeredForIdleNotifications;	// 8 = 0x8
    id <HHAAssignmentAlgorithm> _assignmentAlgorithm;	// 16 = 0x10
    HHANode *_node;	// 24 = 0x18
    id <HHATimer> _logTimer;	// 32 = 0x20
    HHAMessageService *_messageService;	// 40 = 0x28
    unsigned long long _timesEndpointsReassigned;	// 48 = 0x30
    id <HHATimer> _syncTimer;	// 56 = 0x38
    HHAEndpointMonitor *_endpointMonitor;	// 64 = 0x40
    HHAHubMonitor *_hubMonitor;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000a529
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool registeredForIdleNotifications; // @synthesize registeredForIdleNotifications=_registeredForIdleNotifications;
@property(readonly, nonatomic) HHAHubMonitor *hubMonitor; // @synthesize hubMonitor=_hubMonitor;
@property(readonly, nonatomic) HHAEndpointMonitor *endpointMonitor; // @synthesize endpointMonitor=_endpointMonitor;
@property(readonly, nonatomic) id <HHATimer> syncTimer; // @synthesize syncTimer=_syncTimer;
@property(readonly, nonatomic) unsigned long long timesEndpointsReassigned; // @synthesize timesEndpointsReassigned=_timesEndpointsReassigned;
@property(readonly, nonatomic) __weak HHAMessageService *messageService; // @synthesize messageService=_messageService;
@property(readonly, nonatomic) id <HHATimer> logTimer; // @synthesize logTimer=_logTimer;
@property(readonly, nonatomic) __weak HHANode *node; // @synthesize node=_node;
@property(readonly, nonatomic) id <HHAAssignmentAlgorithm> assignmentAlgorithm; // @synthesize assignmentAlgorithm=_assignmentAlgorithm;
- (void)generateMetricsReport;	// IMP=0x0000000000009d17
- (id)_generateEndpointScoreDictionary;	// IMP=0x0000000000009a3e
- (id)_generateAssignmentDictionary;	// IMP=0x00000000000098c6
- (void)monitor:(id)arg1 didObserveHubsLost:(id)arg2;	// IMP=0x000000000000980f
- (void)monitor:(id)arg1 didObserveActiveHubUpdate:(id)arg2;	// IMP=0x00000000000092e3
- (id)assignedHubById:(id)arg1;	// IMP=0x00000000000092b1
- (void)reportActivationOfEndpoint:(id)arg1 toHub:(id)arg2 withAttachLatency:(double)arg3;	// IMP=0x0000000000008f09
- (void)requestAssignmentOfEndpoint:(id)arg1;	// IMP=0x0000000000008ef7
- (void)executeRevokeAssignmentOfEndpoint:(id)arg1 fromHub:(id)arg2;	// IMP=0x0000000000008ee5
- (void)executeAssignmentOfEndpoint:(id)arg1 toHub:(id)arg2;	// IMP=0x0000000000008ed3
- (void)reviewAssignmentForEndpoint:(id)arg1;	// IMP=0x0000000000008e02
- (void)monitor:(id)arg1 didUpdateEndpoint:(id)arg2;	// IMP=0x0000000000008ca7
- (void)monitor:(id)arg1 didRemoveEndpoint:(id)arg2;	// IMP=0x0000000000008bd5
- (void)_processSetIdleGracePeriodCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008a24
- (void)_processSetHubConcernDebounceCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000086c8
- (void)_processSetEndpointIdleStateCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000838d
- (void)_processDemandEndpointReassignmentCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007f5b
- (void)_processRequestReassignmentDebugCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000797e
- (void)_processScoreEndpointsDebugCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007910
- (void)handleDebugCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000072fa
- (void)handleRequestForEndpointAssignmentDataWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007207
- (void)handleIdleStatusReport:(id)arg1;	// IMP=0x00000000000071f1
- (void)handleNodesChanged:(id)arg1;	// IMP=0x00000000000071db
- (void)handleAttributeUpdate:(id)arg1;	// IMP=0x00000000000070e5
- (void)handleAssignmentFailureForEndpoint:(id)arg1 toHub:(id)arg2;	// IMP=0x0000000000006f26
- (void)invalidate;	// IMP=0x0000000000006eab
- (void)startStrategy;	// IMP=0x0000000000006c4b
@property(readonly, nonatomic) NSString *meshRole;
- (id)initWithNode:(id)arg1 messageService:(id)arg2 queue:(id)arg3 timerFactory:(id)arg4;	// IMP=0x0000000000006a5b
- (id)initWithNode:(id)arg1 messageService:(id)arg2 queue:(id)arg3 timerFactory:(id)arg4 endpointMonitorFactory:(id)arg5 hubMonitorFactory:(id)arg6 assignmentAlgorithmFactory:(id)arg7;	// IMP=0x000000000000659d
- (void)_handlePingFromHub:(id)arg1;	// IMP=0x00000000000064ae
- (void)_registerForIdleNotifications:(_Bool)arg1;	// IMP=0x00000000000063ac
- (void)_reviewSingleAssignment:(id)arg1;	// IMP=0x0000000000006162
- (void)_reviewAllAssignments;	// IMP=0x0000000000005f29
- (id)_maybePerformAssignments:(id)arg1;	// IMP=0x0000000000005aba
- (void)_synchronizeEndpointAssignments;	// IMP=0x00000000000057c1
- (void)_revokeEndpointAssignment:(id)arg1 fromHub:(id)arg2;	// IMP=0x0000000000005512
- (void)_assignEndpoint:(id)arg1 toHub:(id)arg2;	// IMP=0x00000000000051cf
- (_Bool)_hubIsSelf:(id)arg1;	// IMP=0x0000000000005128
@property(readonly, nonatomic) NSUUID *leaderId;
- (void)_handleSyncTimerFired;	// IMP=0x00000000000050d3
- (void)_handleLogTimerFired;	// IMP=0x0000000000004d04
- (void)_fromMeshDebugCommandMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016f12
- (void)_fromMeshListAssignmentsMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016e0b
- (void)_fromMeshHandleIdleReportMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016d60
- (void)_fromMeshHandleAssignmentFailureMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016c63
- (void)_fromMeshHandleAttributeUpdateMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016bb8
- (void)_fromMeshHandlePingMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016ac1
- (void)unregisterForMessagesFromService:(id)arg1;	// IMP=0x0000000000016a39
- (void)registerForMessagesWithService:(id)arg1;	// IMP=0x00000000000164b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
