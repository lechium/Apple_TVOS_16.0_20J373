//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIContentRatingSystemUtilities : NSObject
{
}

+ (id)_cleanedRatingSystem:(id)arg1;	// IMP=0x00800000000026c0
+ (id)_ratingSystemStringLookUpDictionary;	// IMP=0x00800000000025ca
+ (id)_ratingSystemLookUpDictionary;	// IMP=0x00800000000024d4
+ (_Bool)_isRatingSystemForTV:(long long)arg1;	// IMP=0x00800000000024c0
+ (_Bool)_isRatingSystemForMusic:(long long)arg1;	// IMP=0x00800000000024b3
+ (_Bool)_isRatingSystemForMovies:(long long)arg1;	// IMP=0x008000000000249f
+ (long long)ratingSystemKindForRatingSystem:(long long)arg1;	// IMP=0x008000000000243d
+ (id)stringForRatingSystem:(long long)arg1;	// IMP=0x00800000000023b6
+ (long long)ratingSystemForString:(id)arg1;	// IMP=0x00800000000022b8

@end
