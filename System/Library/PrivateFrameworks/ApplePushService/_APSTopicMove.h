//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _APSTopicMove : NSObject
{
    NSString *_topic;	// 8 = 0x8
    unsigned long long _fromListID;	// 16 = 0x10
    unsigned long long _toListID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000435b
@property(nonatomic) unsigned long long toListID; // @synthesize toListID=_toListID;
@property(nonatomic) unsigned long long fromListID; // @synthesize fromListID=_fromListID;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;

@end

