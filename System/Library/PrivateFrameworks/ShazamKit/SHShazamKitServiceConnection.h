//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, SHShazamKitServiceConnectionProvider;

__attribute__((visibility("hidden")))
@interface SHShazamKitServiceConnection : NSObject
{
    struct os_unfair_lock_s _connectionLock;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    SHShazamKitServiceConnectionProvider *_connectionProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000015dbb
@property(nonatomic) struct os_unfair_lock_s connectionLock; // @synthesize connectionLock=_connectionLock;
@property(readonly, nonatomic) SHShazamKitServiceConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x0000000000015cd1
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;	// IMP=0x0000000000015bf4
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;	// IMP=0x0000000000015b2e
- (void)_libraryWillBeginSync:(id)arg1;	// IMP=0x0000000000015a87
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x00000000000159c1
- (oneway void)sendEventSignal:(id)arg1;	// IMP=0x0000000000015931
- (void)mediaItemForShazamID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015780
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015624
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000154e8
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0000000000015268
- (void)stop;	// IMP=0x00000000000151fe
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0000000000014e55
- (void)tearDownConnection;	// IMP=0x0000000000014d61
- (void)attachDefaultConnectionHandlers;	// IMP=0x0000000000014aaf
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x0000000000014982
- (void)dealloc;	// IMP=0x0000000000014944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
