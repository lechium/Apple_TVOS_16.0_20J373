//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMicroLocationNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000700f58
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000700f3f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000700ee2
- (void)purgeMicroLocationSemiSupervisedDataForClient:(id)arg1;	// IMP=0x0020000000703b56
- (void)donateTruthTagLabelForClient:(id)arg1 truthLabelUUID:(id)arg2 betweenDate:(id)arg3 andDate:(id)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000703823
- (void)donateTruthTagLabelForClient:(id)arg1 truthLabelUUID:(id)arg2 recordingTriggerUUID:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000070354b
- (void)requestAnchorValueStatisticsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000702bb5
- (void)exportMicroLocationDatabaseTablesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000701a05
- (_Bool)syncgetMicroLocationInternalVersion:(id *)arg1;	// IMP=0x0010000000701787
- (void)requestMicroLocationRecordingScanForClient:(id)arg1 withAdditionalInformation:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000070141d
- (void)requestCurrentMicroLocationForClient:(id)arg1 withAdditionalInformation:(id)arg2;	// IMP=0x001000000070116a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000701142
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000701115
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000007010ed
- (void *)adaptee;	// IMP=0x00100000007010ba
- (void)endService;	// IMP=0x001000000070109f
- (void)beginService;	// IMP=0x0010000000700ff1
- (id)init;	// IMP=0x0010000000700fb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

