//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTDataProviderClient, NSObject;
@protocol GTMTLReplayService, OS_os_log;

@interface GTMTLReplayServiceXPCDispatcher
{
    id <GTMTLReplayService> _implInstance;	// 8 = 0x8
    GTDataProviderClient *_dataProviderClient;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000005e67b
- (void)teardownAccelerationStructureSession_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005e586
- (void)sendAccelerationStructureDataWithSessionID_data_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005e4c4
- (void)beginAccelerationStructureSessionWithObjectID_functionIndex_dataReceivedHandler_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005e2eb
- (void)resourcesUsedForFunctionIndex_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005e1ee
- (void)wireframeLineWidth_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005e1b4
- (void)sendQueryShaderInfoData_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005e19f
- (void)queryShaderInfo_timelineInfo_dataReceivedHandler_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005dfbf
- (void)queryInducedGPUPerfStateWithCompletionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005def8
- (void)updateResourceObject_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005ddfb
- (void)updateLibraries_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005dcfe
- (void)traceConfiguration_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005dc76
- (void)teardownAccelerationStructureSession:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005dc59
- (void)signalInterposeSemaphore:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005dc3c
- (void)sendDebuggingFiles_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005db3f
- (void)replayArchive:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005db22
- (void)overridesConfiguration_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005da9a
- (void)loadArchives:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005da7d
- (void)invalidateSavePointerAliases:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005da60
- (void)generateThumbnails_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d963
- (void)generateShaderDebuggerTrace_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d866
- (void)generateListOfDebugFilesInCacheWithCompletionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d79f
- (void)generateDependencyGraphThumbnails_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d6a2
- (void)fetchResourceObjectBatch_compressionKey_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d4ce
- (void)fetchResourceObject_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d36b
- (void)endDebugArchive:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d34e
- (void)enableWireframePresent_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d315
- (void)enableOutlinePresent_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d2dc
- (void)enableDrawCallPresent_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d2a3
- (void)loadAnalysis_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d1dc
- (void)addBatchFilteringRequest_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d0df
- (void)sendDerivedCounterDataData_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005d0ca
- (void)derivedCounterData_attributes_dataReceivedHandler_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005cebe
- (void)deleteAllArchivesWithCompletionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005cdfa
- (void)debugFuncStop_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005cdc1
- (void)beginDebugArchive_extensionToken_debugFiles_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005cc13
- (void)beginAccelerationStructureSession:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005cbf6
- (void)accelerationStructureData:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000005cbd9
- (id)initWithService:(id)arg1;	// IMP=0x001000000005cb14

@end
