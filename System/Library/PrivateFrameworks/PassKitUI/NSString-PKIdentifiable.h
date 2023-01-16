//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@protocol NSCopying;

@interface NSString (PKIdentifiable)
@property(readonly, nonatomic) id <NSCopying> identifier;
- (id)pk_posixStringWithMinimumDecimalPlaces:(long long)arg1;	// IMP=0x00200000001d5d8f
- (long long)pk_posixStringDecimalPlaces;	// IMP=0x00200000001d5d2f
- (_Bool)pk_posixStringHasPeriod;	// IMP=0x00200000001d5d00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

