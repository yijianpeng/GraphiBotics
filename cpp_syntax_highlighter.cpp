#include "cpp_syntax_highlighter.h"

/*c++的语法高亮函数的定义，后续可以在这边编写与维护*/


CppSyntaxHighlighter::CppSyntaxHighlighter(QTextDocument *parent) : QSyntaxHighlighter(parent)
{
    // Define the highlighting rules
    HighlightingRule rule;

    // C++ keywords
    keywordFormat.setForeground(Qt::blue);
    QStringList cppKeywordPatterns;
    // Add all the C++ keywords here
    cppKeywordPatterns << "\\bclass\\b" << "\\bnamespace\\b" << "\\btemplate\\b" << "\\btry\\b" << "\\bcatch\\b"
                       << "\\bthrow\\b" << "\\bdelete\\b" << "\\bnew\\b" << "\\bpublic\\b" << "\\bprivate\\b"
                       << "\\bprotected\\b" << "\\bvirtual\\b" << "\\bconst_cast\\b" << "\\bdynamic_cast\\b"
                       << "\\bexplicit\\b" << "\\breinterpret_cast\\b" << "\\bstatic_cast\\b" << "\\btypename\\b"
                       << "\\btypeid\\b" << "\\busing\\b";
    for (const QString &pattern : cppKeywordPatterns) {
        rule.pattern = QRegularExpression(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }

    // C++ class names (user-defined types)
    classFormat.setForeground(Qt::darkMagenta);
    rule.pattern = QRegularExpression("\\b[A-Za-z_][A-Za-z0-9_]*\\b");
    rule.format = classFormat;
    highlightingRules.append(rule);

    // C++ single-line comments
    singleLineCommentFormat.setForeground(Qt::darkGreen);
    rule.pattern = QRegularExpression("//[^\n]*");
    rule.format = singleLineCommentFormat;
    highlightingRules.append(rule);

    // C++ multi-line comments
    multiLineCommentFormat.setForeground(Qt::darkGreen);
    rule.pattern = QRegularExpression("/\\*.*\\*/");
    rule.format = multiLineCommentFormat;
    highlightingRules.append(rule);

    // C++ strings (double quotes)
    quotationFormat.setForeground(Qt::darkRed);
    rule.pattern = QRegularExpression("\".*\"");
    rule.format = quotationFormat;
    highlightingRules.append(rule);

    // C++ characters (single quotes)
    charFormat.setForeground(Qt::darkRed);
    rule.pattern = QRegularExpression("'.'");
    rule.format = charFormat;
    highlightingRules.append(rule);

    // C++ numbers (integer and floating-point)
    numberFormat.setForeground(Qt::darkBlue);
    rule.pattern = QRegularExpression("\\b[-+]?\\d+\\.?\\d*\\b");
    rule.format = numberFormat;
    highlightingRules.append(rule);

    // C++ preprocessor directives
    preprocessorFormat.setForeground(Qt::darkYellow);
    rule.pattern = QRegularExpression("#[^\n]*");
    rule.format = preprocessorFormat;
    highlightingRules.append(rule);

    functionParameterFormat.setForeground(Qt::green);
    rule.pattern = QRegularExpression("\\b[A-Za-z_][A-Za-z0-9_]*\\s+(?=[A-Za-z_][A-Za-z0-9_]*\\()");
    rule.format = functionParameterFormat;
    highlightingRules.append(rule);
}

void CppSyntaxHighlighter::highlightBlock(const QString &text)
{
    for (const HighlightingRule &rule : qAsConst(highlightingRules)) {
        QRegularExpressionMatchIterator matchIterator = rule.pattern.globalMatch(text);
        while (matchIterator.hasNext()) {
            QRegularExpressionMatch match = matchIterator.next();
            setFormat(match.capturedStart(), match.capturedLength(), rule.format);
        }
    }
}
