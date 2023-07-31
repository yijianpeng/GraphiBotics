#ifndef CPP_SYNTAX_HIGHLIGHTER_H
#define CPP_SYNTAX_HIGHLIGHTER_H

#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QRegularExpression>

class CppSyntaxHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT

public:
    CppSyntaxHighlighter(QTextDocument *parent = nullptr);

protected:
    void highlightBlock(const QString &text) override;

private:
    struct HighlightingRule
    {
        QRegularExpression pattern;
        QTextCharFormat format;
    };

    QVector<HighlightingRule> highlightingRules;
    QTextCharFormat keywordFormat;
    QTextCharFormat classFormat;
    QTextCharFormat singleLineCommentFormat;
    QTextCharFormat multiLineCommentFormat;
    QTextCharFormat quotationFormat;
    QTextCharFormat charFormat;
    QTextCharFormat numberFormat;
    QTextCharFormat preprocessorFormat;
    QTextCharFormat functionParameterFormat;
};
#endif // CPP_SYNTAX_HIGHLIGHTER_H
