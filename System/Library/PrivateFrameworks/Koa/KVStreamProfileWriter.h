//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream, NSString;

@interface KVStreamProfileWriter : NSObject
{
    NSOutputStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000026a4f
- (_Bool)finishProfile:(id *)arg1;	// IMP=0x0000000000026a47
- (_Bool)finishDataset:(id *)arg1;	// IMP=0x0000000000026a3f
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002679d
- (_Bool)startDataset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002661c
- (_Bool)startProfile:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002646c
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00000000000263ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

