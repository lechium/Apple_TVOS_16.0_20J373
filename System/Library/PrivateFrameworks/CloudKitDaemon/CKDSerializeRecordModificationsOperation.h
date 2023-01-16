//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDProtocolTranslator, NSArray, NSData;
@protocol CKSerializeRecordModificationsOperationCallbacks;

@interface CKDSerializeRecordModificationsOperation
{
    CDUnknownBlockType _serializeCompletionBlock;	// 8 = 0x8
    NSArray *_recordsToSave;	// 16 = 0x10
    NSArray *_recordIDsToDelete;	// 24 = 0x18
    CKDProtocolTranslator *_translator;	// 32 = 0x20
    NSData *_serializedModifications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000210060
@property(retain) NSData *serializedModifications; // @synthesize serializedModifications=_serializedModifications;
@property(retain) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(copy, nonatomic) CDUnknownBlockType serializeCompletionBlock; // @synthesize serializeCompletionBlock=_serializeCompletionBlock;
- (void)_serialize;	// IMP=0x000000000020efbf
- (void)_setupTranslator;	// IMP=0x000000000020ec00
- (void)_preflightRecords;	// IMP=0x000000000020e5b0
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000020e4ba
- (_Bool)validateAgainstLiveContainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020e2be
- (void)main;	// IMP=0x000000000020e2aa
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000020e254
- (_Bool)makeStateTransition;	// IMP=0x000000000020e147
- (id)activityCreate;	// IMP=0x000000000020e11e
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000020e05c

// Remaining properties
@property(retain, nonatomic) id <CKSerializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

