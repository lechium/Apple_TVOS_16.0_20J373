//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSensorRecorderInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
}

- (id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x0000000000128d20
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;	// IMP=0x00000000001289b6
- (_Bool)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4;	// IMP=0x00000000001285fe
- (id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3;	// IMP=0x00000000001282d9
- (id)_newMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3;	// IMP=0x0000000000127ff4
- (id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x0000000000127fd5
- (id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2;	// IMP=0x0000000000127fb6
- (void)dealloc;	// IMP=0x0000000000127f73
- (void)teardown;	// IMP=0x0000000000127ef0
- (id)init;	// IMP=0x0000000000127e15

@end

