//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface PIClientFeedback : NSObject
{
    NSDate *_earliestDate;	// 8 = 0x8
    NSDate *_latestDate;	// 16 = 0x10
    NSMutableDictionary *_feedback;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000011a4b
@property(retain, nonatomic) NSMutableDictionary *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSDate *latestDate; // @synthesize latestDate=_latestDate;
@property(retain, nonatomic) NSDate *earliestDate; // @synthesize earliestDate=_earliestDate;
- (id)init;	// IMP=0x001000000001193c

@end

