//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, SDAirDropTransferManager;

@interface SDAirDropClassroomTransferManager
{
    NSMutableDictionary *_transferIDToProgress;	// 8 = 0x8
    SDAirDropTransferManager *_transferManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000018e490
@property(retain, nonatomic) SDAirDropTransferManager *transferManager; // @synthesize transferManager=_transferManager;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000018e31c
- (void)connectionEstablished:(id)arg1;	// IMP=0x001000000018e213
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000018e20b
- (id)remoteObjectInterface;	// IMP=0x001000000018e1eb
- (id)exportedInterface;	// IMP=0x001000000018e09b
- (id)machServiceName;	// IMP=0x001000000018e08e
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x001000000018deb1
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;	// IMP=0x001000000018dce2
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000018d30a
- (void)replaceIconValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000018d1ea
- (id)makeDestinationDirectoryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018cf65
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000018cf53
- (void)invalidate;	// IMP=0x001000000018cf24
- (void)activate;	// IMP=0x001000000018cef5
- (id)init;	// IMP=0x001000000018ce98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
