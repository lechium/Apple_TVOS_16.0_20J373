//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGFTMetricsCollector, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSDSessionKeyValueDeliveryDelegate;

@interface IDSDSessionKeyValueDelivery : NSObject
{
    id <IDSDSessionKeyValueDeliveryDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_deliveryHandlersByUUID;	// 16 = 0x10
    NSMutableDictionary *_remoteKeyToParticipantIDToData;	// 24 = 0x18
    NSString *_groupID;	// 32 = 0x20
    NSString *_sessionID;	// 40 = 0x28
    IDSGFTMetricsCollector *_metricsCollector;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 56 = 0x38
    NSMutableDictionary *_localKeyToEntry;	// 64 = 0x40
    NSMutableDictionary *_groupIDToDesiredMaterialSet;	// 72 = 0x48
    NSMutableSet *_localMaterials;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000004d0940
@property(readonly, nonatomic) NSMutableSet *localMaterials; // @synthesize localMaterials=_localMaterials;
@property(readonly, nonatomic) NSMutableDictionary *groupIDToDesiredMaterialSet; // @synthesize groupIDToDesiredMaterialSet=_groupIDToDesiredMaterialSet;
@property(readonly, nonatomic) NSMutableDictionary *localKeyToEntry; // @synthesize localKeyToEntry=_localKeyToEntry;
- (void)sendData:(id)arg1 forKey:(unsigned int)arg2 encryption:(unsigned int)arg3 capability:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000004d05d0
- (void)_updateSendData;	// IMP=0x00100000004cf5d0
- (int)_getTypeFromDataKey:(id)arg1;	// IMP=0x00100000004cf540
- (unsigned int)_getKeyFromType:(int)arg1;	// IMP=0x00100000004cf500
- (void)test_receiveData:(id)arg1 forKey:(unsigned int)arg2 fromParticipant:(unsigned long long)arg3;	// IMP=0x00100000004cf490
- (void)_receiveData:(id)arg1 forKey:(unsigned int)arg2 fromParticipant:(unsigned long long)arg3;	// IMP=0x00100000004ced50
- (void)receiveDictionaryData:(id)arg1 forType:(int)arg2 fromParticipant:(unsigned long long)arg3;	// IMP=0x00100000004ce5f0
- (void)removeDeliveryHandler:(id)arg1;	// IMP=0x00100000004ce570
- (id)getAllKeyValueDeliveryLocalMaterialSetForGroupID:(id)arg1;	// IMP=0x00100000004ce2f0
- (void)addDeliveryHandler:(id)arg1 uuid:(id)arg2;	// IMP=0x00100000004cdf30
- (void)dealloc;	// IMP=0x00100000004cdeb0
- (id)initWithDelegate:(id)arg1 forGroupID:(id)arg2 sessionID:(id)arg3 metricsCollector:(id)arg4;	// IMP=0x00100000004cdb70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

