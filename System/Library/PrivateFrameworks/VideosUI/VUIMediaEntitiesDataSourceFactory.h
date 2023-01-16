//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesDataSourceFactory : NSObject
{
}

+ (id)_dataSourceForShelfType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3;	// IMP=0x0080000000138edc
+ (id)dataSourceForShelf:(long long)arg1 withFamilyMember:(id)arg2;	// IMP=0x0080000000138e47
+ (id)dataSourceForShelf:(long long)arg1 withLibrary:(id)arg2;	// IMP=0x0080000000138e2b
+ (id)_fetchRequestForGenre:(id)arg1;	// IMP=0x0080000000138c4c
+ (id)dataSourceForGenre:(id)arg1 withLibrary:(id)arg2;	// IMP=0x0080000000138bb8
+ (id)dataSourceForGenre:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x0080000000138ad4
+ (id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3;	// IMP=0x00800000001384cb
+ (id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2;	// IMP=0x00800000001384af
+ (id)dataSourceForCategoryType:(long long)arg1 withFamilyMember:(id)arg2;	// IMP=0x0080000000138411
+ (id)episodesDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3;	// IMP=0x00800000001382ed
+ (id)seasonsDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3;	// IMP=0x00800000001381db
+ (id)episodesDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x00800000001380e5
+ (id)seasonsDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x0080000000138001
+ (id)dataSourceForFetchRequest:(id)arg1 withLibrary:(id)arg2;	// IMP=0x0080000000137f91
+ (id)dataSourceForCategoryType:(long long)arg1;	// IMP=0x0080000000137ef8

@end

