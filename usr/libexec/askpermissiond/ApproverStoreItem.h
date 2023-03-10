//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, RequestLocalizations;

@interface ApproverStoreItem : NSObject
{
    NSString *_ageRating;	// 8 = 0x8
    NSString *_approverDSID;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSString *_itemIdentifier;	// 32 = 0x20
    NSString *_requestIdentifier;	// 40 = 0x28
    NSString *_itemTitle;	// 48 = 0x30
    NSString *_itemDescription;	// 56 = 0x38
    NSString *_localizedPrice;	// 64 = 0x40
    NSString *_itemBundleID;	// 72 = 0x48
    RequestLocalizations *_localizations;	// 80 = 0x50
    NSString *_thumbnailURLString;	// 88 = 0x58
    NSString *_requesterDSID;	// 96 = 0x60
    NSString *_requesterName;	// 104 = 0x68
    NSDictionary *_requestInfo;	// 112 = 0x70
    NSNumber *_starRating;	// 120 = 0x78
    long long _status;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000044fe
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(retain, nonatomic) NSString *requesterName; // @synthesize requesterName=_requesterName;
@property(retain, nonatomic) NSString *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property(retain, nonatomic) NSString *thumbnailURLString; // @synthesize thumbnailURLString=_thumbnailURLString;
@property(readonly, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(retain, nonatomic) NSString *itemBundleID; // @synthesize itemBundleID=_itemBundleID;
@property(retain, nonatomic) NSString *localizedPrice; // @synthesize localizedPrice=_localizedPrice;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *approverDSID; // @synthesize approverDSID=_approverDSID;
@property(retain, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
- (id)description;	// IMP=0x001000000000430e
- (id)compile;	// IMP=0x0010000000003ef8
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000000366d
- (id)initWithItemIdentifier:(id)arg1 requestIdentifier:(id)arg2 date:(id)arg3;	// IMP=0x00100000000035b6
- (id)initWithRequest:(id)arg1 date:(id)arg2;	// IMP=0x001000000000333e

@end

