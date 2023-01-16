//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLSessionCatherine : PBCodable
{
    double _startTime;	// 8 = 0x8
    int _activityType;	// 16 = 0x10
    float _firstCatherine;	// 20 = 0x14
    float _firstCatherineStartTime;	// 24 = 0x18
    float _longestDropout;	// 28 = 0x1c
    float _maxGoodCatherine;	// 32 = 0x20
    float _meanCatherine;	// 36 = 0x24
    float _meanGoodCatherine;	// 40 = 0x28
    float _minGoodCatherine;	// 44 = 0x2c
    unsigned int _nCatherine;	// 48 = 0x30
    unsigned int _nDropout;	// 52 = 0x34
    unsigned int _nGoodCatherine;	// 56 = 0x38
    unsigned int _nHighCatherine;	// 60 = 0x3c
    unsigned int _nInterpolatedCatherine;	// 64 = 0x40
    unsigned int _nLowCatherine;	// 68 = 0x44
    unsigned int _nSampleAndHoldCatherine;	// 72 = 0x48
    unsigned int _nVeryHighCatherine;	// 76 = 0x4c
    unsigned int _nVeryLowCatherine;	// 80 = 0x50
    float _onsetCatherine;	// 84 = 0x54
    int _onsetReason;	// 88 = 0x58
    float _persistedMinHR;	// 92 = 0x5c
    float _totalDropoutTime;	// 96 = 0x60
    float _userMaxCatherine;	// 100 = 0x64
    struct {
        unsigned int startTime:1;
        unsigned int firstCatherine:1;
        unsigned int firstCatherineStartTime:1;
        unsigned int longestDropout:1;
        unsigned int maxGoodCatherine:1;
        unsigned int meanCatherine:1;
        unsigned int meanGoodCatherine:1;
        unsigned int minGoodCatherine:1;
        unsigned int nCatherine:1;
        unsigned int nDropout:1;
        unsigned int nGoodCatherine:1;
        unsigned int nHighCatherine:1;
        unsigned int nInterpolatedCatherine:1;
        unsigned int nLowCatherine:1;
        unsigned int nSampleAndHoldCatherine:1;
        unsigned int nVeryHighCatherine:1;
        unsigned int nVeryLowCatherine:1;
        unsigned int onsetCatherine:1;
        unsigned int onsetReason:1;
        unsigned int persistedMinHR:1;
        unsigned int totalDropoutTime:1;
        unsigned int userMaxCatherine:1;
    } _has;	// 104 = 0x68
}

@property(nonatomic) float persistedMinHR; // @synthesize persistedMinHR=_persistedMinHR;
@property(nonatomic) float userMaxCatherine; // @synthesize userMaxCatherine=_userMaxCatherine;
@property(nonatomic) float onsetCatherine; // @synthesize onsetCatherine=_onsetCatherine;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int nDropout; // @synthesize nDropout=_nDropout;
@property(nonatomic) float totalDropoutTime; // @synthesize totalDropoutTime=_totalDropoutTime;
@property(nonatomic) float longestDropout; // @synthesize longestDropout=_longestDropout;
@property(nonatomic) float firstCatherineStartTime; // @synthesize firstCatherineStartTime=_firstCatherineStartTime;
@property(nonatomic) float firstCatherine; // @synthesize firstCatherine=_firstCatherine;
@property(nonatomic) float meanGoodCatherine; // @synthesize meanGoodCatherine=_meanGoodCatherine;
@property(nonatomic) float meanCatherine; // @synthesize meanCatherine=_meanCatherine;
@property(nonatomic) float maxGoodCatherine; // @synthesize maxGoodCatherine=_maxGoodCatherine;
@property(nonatomic) float minGoodCatherine; // @synthesize minGoodCatherine=_minGoodCatherine;
@property(nonatomic) unsigned int nSampleAndHoldCatherine; // @synthesize nSampleAndHoldCatherine=_nSampleAndHoldCatherine;
@property(nonatomic) unsigned int nInterpolatedCatherine; // @synthesize nInterpolatedCatherine=_nInterpolatedCatherine;
@property(nonatomic) unsigned int nGoodCatherine; // @synthesize nGoodCatherine=_nGoodCatherine;
@property(nonatomic) unsigned int nVeryHighCatherine; // @synthesize nVeryHighCatherine=_nVeryHighCatherine;
@property(nonatomic) unsigned int nHighCatherine; // @synthesize nHighCatherine=_nHighCatherine;
@property(nonatomic) unsigned int nLowCatherine; // @synthesize nLowCatherine=_nLowCatherine;
@property(nonatomic) unsigned int nVeryLowCatherine; // @synthesize nVeryLowCatherine=_nVeryLowCatherine;
@property(nonatomic) unsigned int nCatherine; // @synthesize nCatherine=_nCatherine;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000002b539b
- (unsigned long long)hash;	// IMP=0x00100000002b4510
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002b4091
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002b3dc9
- (void)copyTo:(id)arg1;	// IMP=0x00100000002b3b3f
- (void)writeTo:(id)arg1;	// IMP=0x00100000002b3831
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002b3824
- (id)dictionaryRepresentation;	// IMP=0x00100000002b22d8
- (id)description;	// IMP=0x00100000002b2261
@property(nonatomic) _Bool hasPersistedMinHR;
@property(nonatomic) _Bool hasUserMaxCatherine;
@property(nonatomic) _Bool hasOnsetCatherine;
- (int)StringAsOnsetReason:(id)arg1;	// IMP=0x00100000002b20c7
- (id)onsetReasonAsString:(int)arg1;	// IMP=0x00100000002b208c
@property(nonatomic) _Bool hasOnsetReason;
@property(nonatomic) int onsetReason; // @synthesize onsetReason=_onsetReason;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasNDropout;
@property(nonatomic) _Bool hasTotalDropoutTime;
@property(nonatomic) _Bool hasLongestDropout;
@property(nonatomic) _Bool hasFirstCatherineStartTime;
@property(nonatomic) _Bool hasFirstCatherine;
@property(nonatomic) _Bool hasMeanGoodCatherine;
@property(nonatomic) _Bool hasMeanCatherine;
@property(nonatomic) _Bool hasMaxGoodCatherine;
@property(nonatomic) _Bool hasMinGoodCatherine;
@property(nonatomic) _Bool hasNSampleAndHoldCatherine;
- (void);	// IMP=0x00100000002b1cd1
@property(nonatomic) _Bool hasNInterpolatedCatherine;
@property(nonatomic) _Bool hasNGoodCatherine;
@property(nonatomic) _Bool hasNVeryHighCatherine;
@property(nonatomic) _Bool hasNHighCatherine;
@property(nonatomic) _Bool hasNLowCatherine;
@property(nonatomic) _Bool hasNVeryLowCatherine;
@property(nonatomic) _Bool hasNCatherine;
- (int)StringAsActivityType:(id)arg1;	// IMP=0x00100000002b15a4
- (id)activityTypeAsString:(int)arg1;	// IMP=0x00100000002b1200

@end

