//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (MKLocatableAdditions)
- (void)_mapkit_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;	// IMP=0x00600000000dc24b
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1 ascending:(_Bool)arg2;	// IMP=0x00600000000dc1f4
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00600000000dc1dd
- (void)_mapkit_sortUsingLongitudeAscending:(_Bool)arg1;	// IMP=0x00600000000dc182
- (void)_mapkit_sortUsingLongitude;	// IMP=0x00600000000dc16b
- (void)_mapkit_sortUsingLatitudeAscending:(_Bool)arg1;	// IMP=0x00600000000dc116
- (void)_mapkit_sortUsingLatitude;	// IMP=0x00600000000dc0ff
- (id)_mapkit_popLastObject;	// IMP=0x00600000000dc0b7
@end

