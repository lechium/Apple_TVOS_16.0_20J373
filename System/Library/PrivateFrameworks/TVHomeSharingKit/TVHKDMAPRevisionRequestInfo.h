//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TVHKDMAPRevisionRequestInfo : NSObject
{
    _Bool _detectedBadlyBehavingServer;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSMutableArray *_requestStartTimeHistory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000051ac2
@property(retain, nonatomic) NSMutableArray *requestStartTimeHistory; // @synthesize requestStartTimeHistory=_requestStartTimeHistory;
@property(nonatomic) _Bool detectedBadlyBehavingServer; // @synthesize detectedBadlyBehavingServer=_detectedBadlyBehavingServer;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void)recordRequestStarted;	// IMP=0x00000000000517e9
@property(readonly, nonatomic) unsigned long long requestStartDelay;
- (id)initWithType:(id)arg1;	// IMP=0x0000000000051744

@end
