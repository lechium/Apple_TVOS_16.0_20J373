//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContainerDiff : NSObject
{
    NSArray *_updates;	// 8 = 0x8
}

+ (id)diffContainer:(id)arg1 to:(id)arg2;	// IMP=0x00600000000b4f25
- (void).cxx_destruct;	// IMP=0x00000000000b50ae
@property(retain, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (id)description;	// IMP=0x00000000000b500d
- (id)initWithUpdates:(id)arg1;	// IMP=0x00000000000b4f83

@end
