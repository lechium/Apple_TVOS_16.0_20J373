//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/ML3StoreItemTrackData.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MPStoreItemImportTrackData : ML3StoreItemTrackData
{
    NSArray *_importElements;	// 8 = 0x8
}

+ (id)_importPropertiesDictFromImportMetadataDict:(id)arg1;	// IMP=0x0060000000182f27
- (void).cxx_destruct;	// IMP=0x0000000000182de8
@property(readonly, nonatomic) NSArray *importElements; // @synthesize importElements=_importElements;
- (id)_associatedElementForPropertyDict:(id)arg1;	// IMP=0x0000000000182afd
- (id)parsedStoreItemsImportProperties;	// IMP=0x0000000000182a06
- (id)initWithImportElements:(id)arg1;	// IMP=0x000000000018273f

@end

