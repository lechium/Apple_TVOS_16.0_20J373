//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VKCustomFeatureDataSource;

__attribute__((visibility("hidden")))
@interface VKCustomFeatureDataSourceObserverThunk : NSObject
{
    void *_observer;	// 8 = 0x8
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        id <VKCustomFeatureDataSource> _obj;
        struct _retain_objc_arc _retain;
        struct _release_objc_arc _release;
    } _dataSource;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000005ec945
- (void).cxx_destruct;	// IMP=0x00000000005ec92b
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;	// IMP=0x00000000005ec8c9
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;	// IMP=0x00000000005ec869
- (void)globalFeaturesDidChangeForDataSource:(id)arg1;	// IMP=0x00000000005ec833
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(CDStruct_90e2a262)arg2;	// IMP=0x00000000005ec81e
- (void)clearObserver;	// IMP=0x00000000005ec7db
- (void)dealloc;	// IMP=0x00000000005ec768
- (id)initWithDataSource:(id)arg1 observer:(void *)arg2;	// IMP=0x00000000005ec681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

