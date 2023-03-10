//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDProtocolTranslator, NSArray, NSData;
@protocol CKDeserializeRecordModificationsOperationCallbacks;

@interface CKDDeserializeRecordModificationsOperation
{
    CDUnknownBlockType _deserializeCompletionBlock;	// 8 = 0x8
    NSData *_serializedModifications;	// 16 = 0x10
    CKDProtocolTranslator *_translator;	// 24 = 0x18
    NSArray *_recordsToSave;	// 32 = 0x20
    NSArray *_recordIDsToDelete;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004d746
@property(retain) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(retain) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) NSData *serializedModifications; // @synthesize serializedModifications=_serializedModifications;
@property(copy, nonatomic) CDUnknownBlockType deserializeCompletionBlock; // @synthesize deserializeCompletionBlock=_deserializeCompletionBlock;
- (void)_postflightRecords;	// IMP=0x000000000004d1ca
- (void)_deserialize;	// IMP=0x000000000004bbbb
- (void)_setupTranslator;	// IMP=0x000000000004b7fc
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000004b6d6
- (_Bool)validateAgainstLiveContainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004b4da
- (void)main;	// IMP=0x000000000004b4c6
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000004b470
- (_Bool)makeStateTransition;	// IMP=0x000000000004b364
- (id)activityCreate;	// IMP=0x000000000004b33b
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000004b2ac

// Remaining properties
@property(retain, nonatomic) id <CKDeserializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

