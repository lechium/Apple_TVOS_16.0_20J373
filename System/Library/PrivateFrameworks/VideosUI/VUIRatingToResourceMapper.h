//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIRatingToResourceMapper : NSObject
{
    NSDictionary *_mappingDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019f074
@property(retain, nonatomic) NSDictionary *mappingDictionary; // @synthesize mappingDictionary=_mappingDictionary;
- (id)_cleanRatingName:(id)arg1;	// IMP=0x000000000019ef02
- (id)resourceForRating:(id)arg1 ratingSystem:(id)arg2;	// IMP=0x000000000019ecee
- (id)init;	// IMP=0x000000000019ec9d

@end
