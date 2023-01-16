//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLFallServer : NSObject
{
    _Bool _dataCollectionEnabled;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool dataCollectionEnabled; // @synthesize dataCollectionEnabled=_dataCollectionEnabled;
- (void)clearUUID;	// IMP=0x0010000000a2a677
- (id)getUUID;	// IMP=0x0010000000a2a66f
- (void)cleanUp:(double)arg1;	// IMP=0x0010000000a2a669
- (_Bool)sendData:(id)arg1 metaData:(id)arg2 start:(id)arg3 end:(id)arg4;	// IMP=0x0010000000a2a661
- (id)initInUniverse:(id)arg1;	// IMP=0x0010000000a2a659

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

