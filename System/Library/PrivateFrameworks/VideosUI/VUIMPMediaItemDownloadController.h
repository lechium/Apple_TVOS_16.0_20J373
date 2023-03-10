//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSHashTable, VUIMPMediaItemDownloadControllerState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_observerDispatchQueue;	// 8 = 0x8
    MPMediaItem *_mediaItem;	// 16 = 0x10
    VUIMPMediaItemDownloadControllerState *_state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000137eac
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(copy, nonatomic) VUIMPMediaItemDownloadControllerState *state; // @synthesize state=_state;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue; // @synthesize observerDispatchQueue=_observerDispatchQueue;
- (void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x0000000000137cc0
- (void)_onProcessingQueue_setState:(id)arg1;	// IMP=0x0000000000137ab8
- (void)_enqueueObserverQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000137a06
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000137954
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000137845
- (void)_onProcessingQueue_resumeDownload;	// IMP=0x000000000013783f
- (void)_onProcessingQueue_pauseDownload;	// IMP=0x0000000000137839
- (void)_onProcessingQueue_cancelDownload;	// IMP=0x0000000000137833
- (void)_onProcessingQueue_invalidate;	// IMP=0x000000000013782d
- (void)_setState:(id)arg1;	// IMP=0x0000000000137783
- (void)removeObserver:(id)arg1;	// IMP=0x000000000013766d
- (void)addObserver:(id)arg1;	// IMP=0x0000000000137557
- (void)resumeDownload;	// IMP=0x00000000001374f9
- (void)pauseDownload;	// IMP=0x000000000013749b
- (void)cancelDownload;	// IMP=0x000000000013743d
- (void)invalidate;	// IMP=0x000000000013740f
@property(readonly, nonatomic, getter=isRestoreDownload) _Bool restoreDownload;
@property(readonly, nonatomic) _Bool supportsCancellation;
@property(readonly, nonatomic) _Bool supportsPausing;
- (id)init;	// IMP=0x000000000013731f
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;	// IMP=0x00000000001371f9

@end

