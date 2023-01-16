//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface TVHKStoreItemCredits : NSObject
{
    NSSet *_actors;	// 8 = 0x8
    NSSet *_directors;	// 16 = 0x10
    NSSet *_producers;	// 24 = 0x18
    NSSet *_screenwriters;	// 32 = 0x20
    NSSet *_allContributors;	// 40 = 0x28
    NSDictionary *_templateImageURLStringByContributorName;	// 48 = 0x30
}

+ (id)new;	// IMP=0x0060000000086ded
- (void).cxx_destruct;	// IMP=0x0000000000087b18
@property(retain, nonatomic) NSDictionary *templateImageURLStringByContributorName; // @synthesize templateImageURLStringByContributorName=_templateImageURLStringByContributorName;
@property(copy, nonatomic) NSSet *allContributors; // @synthesize allContributors=_allContributors;
@property(copy, nonatomic) NSSet *screenwriters; // @synthesize screenwriters=_screenwriters;
@property(copy, nonatomic) NSSet *producers; // @synthesize producers=_producers;
@property(copy, nonatomic) NSSet *directors; // @synthesize directors=_directors;
@property(copy, nonatomic) NSSet *actors; // @synthesize actors=_actors;
- (id)description;	// IMP=0x0000000000087962
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008762f
- (unsigned long long)hash;	// IMP=0x00000000000874ec
- (id)_init;	// IMP=0x0000000000086e8b
- (id)init;	// IMP=0x0000000000086e1c

@end

