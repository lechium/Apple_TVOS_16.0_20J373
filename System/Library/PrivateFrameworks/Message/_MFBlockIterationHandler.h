//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFActivityMonitor;

__attribute__((visibility("hidden")))
@interface _MFBlockIterationHandler : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    _Bool _cancelled;	// 16 = 0x10
    MFActivityMonitor *_monitor;	// 24 = 0x18
}

- (void)endResult;	// IMP=0x0000000000069d05
- (void)setResultUnread:(_Bool)arg1;	// IMP=0x0000000000069cff
- (void)setResultDateRecieved:(double)arg1;	// IMP=0x0000000000069cf9
- (void)setResultSender:(char *)arg1;	// IMP=0x0000000000069cf3
- (void)setResultSubject:(char *)arg1;	// IMP=0x0000000000069ced
- (void)beginResult:(unsigned int)arg1;	// IMP=0x0000000000069ce7
- (id)filter;	// IMP=0x0000000000069cdf
- (_Bool)shouldCancel;	// IMP=0x0000000000069cbf
- (void)handleMessage:(id)arg1;	// IMP=0x0000000000069c68
- (void)dealloc;	// IMP=0x0000000000069c1e
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000069b9d

@end

