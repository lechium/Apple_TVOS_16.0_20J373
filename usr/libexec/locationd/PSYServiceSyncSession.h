//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSYServiceSyncSession : NSObject
{
    _Bool _didComplete;	// 8 = 0x8
    unsigned long long _syncSessionType;	// 16 = 0x10
}

@property(nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(nonatomic) _Bool didComplete; // @synthesize didComplete=_didComplete;
- (void)syncDidFailWithError:(id)arg1;	// IMP=0x00100000003c6650
- (void)syncDidComplete;	// IMP=0x00100000003c6639

@end

