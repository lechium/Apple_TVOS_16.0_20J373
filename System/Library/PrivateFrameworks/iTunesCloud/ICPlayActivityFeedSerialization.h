//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICPlayActivityFeedSerialization : NSObject
{
    NSString *_currentStoreFrontID;	// 8 = 0x8
}

+ (id)defaultOverrideHTTPHeaderFields;	// IMP=0x006000000001c870
- (void).cxx_destruct;	// IMP=0x000000000001ea35
@property(copy, nonatomic) NSString *currentStoreFrontID; // @synthesize currentStoreFrontID=_currentStoreFrontID;
- (id)propertyListObjectWithPlayActivityEvent:(id)arg1;	// IMP=0x000000000001c8ed

@end

