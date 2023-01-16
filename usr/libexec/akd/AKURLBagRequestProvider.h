//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKURLBagRequestProvider : NSObject
{
    _Bool _shouldFallBack;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    NSString *_urlSwitchData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000028ae4
@property(retain, nonatomic) NSString *urlSwitchData; // @synthesize urlSwitchData=_urlSwitchData;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) _Bool shouldFallBack; // @synthesize shouldFallBack=_shouldFallBack;
- (id)newBagURLRequest;	// IMP=0x00100000000288ac
- (id)_bagURLForAltDSID:(id)arg1 shouldFallBack:(_Bool)arg2;	// IMP=0x0010000000028805
- (id)initWithAltDSID:(id)arg1 urlSwitchData:(id)arg2 shouldFallBack:(_Bool)arg3;	// IMP=0x001000000002874f

@end

