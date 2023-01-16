//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ICSharedListeningConnectionReportEvent : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    NSMutableArray *_subEvents;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001ac511
@property(retain, nonatomic) NSMutableArray *subEvents; // @synthesize subEvents=_subEvents;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) double duration;
- (void)addSubEvent:(id)arg1;	// IMP=0x00000000001ac34f
- (id)initWithName:(id)arg1;	// IMP=0x00000000001ac2ba

@end

