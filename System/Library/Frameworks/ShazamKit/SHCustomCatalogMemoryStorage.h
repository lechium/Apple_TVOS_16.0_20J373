//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SHCustomCatalogMemoryStorage : NSObject
{
    NSArray *_referenceSignatures;	// 8 = 0x8
    NSMutableDictionary *_signatures;	// 16 = 0x10
    NSMutableDictionary *_mediaItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001d3a1
@property(retain, nonatomic) NSMutableDictionary *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) NSMutableDictionary *signatures; // @synthesize signatures=_signatures;
- (void)producedSignature:(id)arg1 forID:(id)arg2;	// IMP=0x000000000001d1ff
- (void)producedMediaItem:(id)arg1 forID:(id)arg2;	// IMP=0x000000000001d093
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;	// IMP=0x000000000001cf34
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;	// IMP=0x000000000001ccde
- (id)jsonObjectRepresentationWithError:(id *)arg1;	// IMP=0x000000000001c96a
- (id)mediaItemsForReferenceSignature:(id)arg1;	// IMP=0x000000000001c8b0
@property(readonly, nonatomic) NSArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
- (id)init;	// IMP=0x000000000001c431

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

