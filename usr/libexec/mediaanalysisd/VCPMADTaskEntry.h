//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, VCPMADTaskProtocol;

@interface VCPMADTaskEntry : NSObject
{
    _Bool _background;	// 8 = 0x8
    unsigned int _qos;	// 12 = 0xc
    unsigned long long _taskID;	// 16 = 0x10
    NSObject<VCPMADTaskProtocol> *_task;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_taskGroup;	// 32 = 0x20
}

+ (id)entryWithID:(unsigned long long)arg1 qos:(unsigned int)arg2 background:(_Bool)arg3 andTask:(id)arg4;	// IMP=0x004000000000e792
- (void).cxx_destruct;	// IMP=0x002000000000e84b
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *taskGroup; // @synthesize taskGroup=_taskGroup;
@property(readonly, nonatomic) NSObject<VCPMADTaskProtocol> *task; // @synthesize task=_task;
@property(readonly, nonatomic) _Bool background; // @synthesize background=_background;
@property(readonly, nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(readonly, nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
- (id)initWithID:(unsigned long long)arg1 qos:(unsigned int)arg2 background:(_Bool)arg3 andTask:(id)arg4;	// IMP=0x001000000000e6e0

@end

