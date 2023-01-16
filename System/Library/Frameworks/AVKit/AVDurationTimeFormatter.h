//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSDateComponentsFormatter;

__attribute__((visibility("hidden")))
@interface AVDurationTimeFormatter : NSFormatter
{
    NSDateComponentsFormatter *_longerFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_shorterFormatter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000075a4e
@property(readonly) NSDateComponentsFormatter *shorterFormatter; // @synthesize shorterFormatter=_shorterFormatter;
@property(readonly) NSDateComponentsFormatter *longerFormatter; // @synthesize longerFormatter=_longerFormatter;
- (id)stringForTimeInterval:(double)arg1;	// IMP=0x0000000000075891
- (id)stringForObjectValue:(id)arg1;	// IMP=0x000000000007581a
- (id)init;	// IMP=0x0000000000075766

@end

