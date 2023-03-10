//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, TVHKMediaLibraryRevision;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryFetchControllerManagerOperation : TVHKAsynchronousOperation
{
    NSArray *_fetchControllers;	// 8 = 0x8
    TVHKMediaLibraryRevision *_mediaLibraryRevision;	// 16 = 0x10
    NSSet *_changedDMAPServerProtocols;	// 24 = 0x18
    NSDictionary *_dependentMediaEntitiesFetchControllersDictionary;	// 32 = 0x20
    NSMutableDictionary *_changedSourceMediaEntityDictionary;	// 40 = 0x28
}

+ (id)_dependentMediaEntitiesFetchControllersDictionaryForFetchControllers:(id)arg1;	// IMP=0x006000000001e78a
+ (id)new;	// IMP=0x006000000001de42
- (void).cxx_destruct;	// IMP=0x000000000001f544
@property(readonly, nonatomic) NSMutableDictionary *changedSourceMediaEntityDictionary; // @synthesize changedSourceMediaEntityDictionary=_changedSourceMediaEntityDictionary;
@property(readonly, copy, nonatomic) NSDictionary *dependentMediaEntitiesFetchControllersDictionary; // @synthesize dependentMediaEntitiesFetchControllersDictionary=_dependentMediaEntitiesFetchControllersDictionary;
@property(readonly, copy, nonatomic) NSSet *changedDMAPServerProtocols; // @synthesize changedDMAPServerProtocols=_changedDMAPServerProtocols;
@property(readonly, copy, nonatomic) TVHKMediaLibraryRevision *mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(readonly, copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
- (void)_didCompleteQueryForFetchController:(id)arg1 withResult:(id)arg2;	// IMP=0x000000000001ebf3
- (id)_startQueryUserInfoForFetchController:(id)arg1;	// IMP=0x000000000001ea54
- (void)executionDidBegin;	// IMP=0x000000000001e0a8
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(id)arg2 changedDMAPServerProtocols:(id)arg3;	// IMP=0x000000000001dee0
- (id)init;	// IMP=0x000000000001de71

@end

