/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPInvitationQueryRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int queryType : 1; 
        unsigned int queryAllContainers : 1; 
    } _has;
    int _queryType;
    bool_queryAllContainers;
}

@property bool hasQueryAllContainers;
@property bool hasQueryType;
@property bool queryAllContainers;
@property int queryType;

+ (id)options;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQueryAllContainers;
- (bool)hasQueryType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)queryAllContainers;
- (int)queryType;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasQueryAllContainers:(bool)arg1;
- (void)setHasQueryType:(bool)arg1;
- (void)setQueryAllContainers:(bool)arg1;
- (void)setQueryType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
