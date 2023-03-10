//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibraryView;

__attribute__((visibility("hidden")))
@interface MPMediaLibrarySystemFilters : NSObject
{
    MPMediaLibraryView *_libraryView;	// 8 = 0x8
    _Bool _shouldExcludePurchaseHistoryContent;	// 16 = 0x10
}

+ (id)filtersForLibrary:(id)arg1;	// IMP=0x0040000000162c72
+ (id)systemFiltersPerLibrary;	// IMP=0x0040000000162c42
+ (id)globalSerialQueue;	// IMP=0x0040000000162bdf
- (void).cxx_destruct;	// IMP=0x0000000000162b17
- (void)_updateFilters;	// IMP=0x00000000001625ec
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;	// IMP=0x00000000001625da
- (_Bool)shouldExcludePurchaseHistoryContent;	// IMP=0x0000000000162562
- (id)_initWithLibrary:(id)arg1;	// IMP=0x0000000000162345

@end

